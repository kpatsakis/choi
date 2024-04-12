void fun()
{
  int entity_3 = 84;
  char* entity_8;
  char entity_7[1] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_7, 'y', 1-1);
  entity_7[1-1]='';
  memcpy(entity_8, entity_7, 1*sizeof(char));
}