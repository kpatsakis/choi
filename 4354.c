void fun()
{
  int entity_0 = 100;
  entity_0 = 96;
  char entity_2[21] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'y', 21-1);
  entity_2[21-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memcpy(entity_7, entity_2, 21*sizeof(char));
}