void fun()
{
  int entity_2 = 14;
  char entity_0 = 'F';
  char entity_8 = 'R';
  char entity_6 = 'A';
  char* entity_3;
  char entity_4[67] = "";
  entity_4 = NULL;
  memset(entity_4, 'q', 67-1);
  entity_4[67-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  strcpy(entity_3, entity_4);
}