void fun()
{
  int entity_7 = 60;
  char* entity_4;
  char entity_2[36] = "";
  entity_2 = NULL;
  memset(entity_2, 'l', 36-1);
  entity_2[36-1]='';
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[28-1]='';
  strcpy(entity_4, entity_2);
}