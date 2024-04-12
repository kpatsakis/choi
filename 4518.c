void fun()
{
  int entity_0 = 78;
  char* entity_7;
  char entity_2[40] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_2, 'p', 40-1);
  entity_2[40-1]='';
  memcpy(entity_7, entity_2, 40*sizeof(char));
}