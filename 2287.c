void fun()
{
  int entity_4 = 26;
  char* entity_1;
  char entity_7[8] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', 8-1);
  entity_7[8-1]='';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  strcpy(entity_1, entity_7);
}