void fun()
{
  int entity_7 = 62;
  char* entity_8;
  char entity_2[17] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', 17-1);
  entity_2[17-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memcpy(entity_8, entity_2, 17*sizeof(char));
}