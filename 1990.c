void fun()
{
  int entity_8 = 18;
  entity_8 = 36;
  char* entity_1;
  char entity_7[67] = "";
  entity_7 = NULL;
  memset(entity_7, 'r', 67-1);
  entity_7[67-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  strcpy(entity_1, entity_7);
}