void fun()
{
  int entity_8 = 19;
  char* entity_1;
  char entity_6[57] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_6, 'A', 57-1);
  entity_6[57-1]='';
  memcpy(entity_1, entity_6, 57*sizeof(char));
}