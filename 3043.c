void fun()
{
  int entity_1 = 28;
  entity_1 = 28;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[16-1]='';
  memset(entity_8, 'r', entity_1-1);
  entity_8[entity_1-1]='';
  strcpy(entity_6, entity_8);
}