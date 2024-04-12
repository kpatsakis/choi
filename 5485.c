void fun()
{
  int entity_9 = 56;
  char* entity_3;
  char entity_5[3] = "";
  entity_5 = NULL;
  memset(entity_5, 'a', 3-1);
  entity_5[3-1]='';
  entity_3 = (char*)malloc(94*sizeof(char));
  entity_3[94-1]='';
  strcpy(entity_3, entity_5);
}