void fun()
{
  int entity_8 = 68;
  char* entity_7;
  char entity_6[80] = "";
  entity_6 = NULL;
  char entity_4 = 'c';
  memset(entity_6, 'b', 80-1);
  entity_6[80-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_6, 80*sizeof(char));
}