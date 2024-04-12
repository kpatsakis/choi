void fun()
{
  int entity_0 = 79;
  char* entity_5;
  char entity_7[56] = "";
  entity_7 = NULL;
  memset(entity_7, 'A', 56-1);
  entity_7[56-1]='';
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[1-1]='';
  strcpy(entity_5, entity_7);
}