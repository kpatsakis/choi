void fun()
{
  int entity_5 = 75;
  char entity_8[21] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_8, 'd', 21-1);
  entity_8[21-1]='';
  memcpy(entity_1, entity_8, 21*sizeof(char));
}