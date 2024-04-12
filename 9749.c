void fun()
{
  int entity_9 = 45;
  char* entity_5;
  char entity_2[15] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(82*sizeof(char));
  entity_5[82-1]='';
  memset(entity_2, 'm', 15-1);
  entity_2[15-1]='';
  strcpy(entity_5, entity_2);
}