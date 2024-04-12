void fun()
{
  int entity_2 = 44;
  int entity_3 = 25;
  char entity_6[40] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'F', 40-1);
  entity_6[40-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memcpy(entity_8, entity_6, 40*sizeof(char));
}