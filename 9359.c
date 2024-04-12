void fun()
{
  int entity_7 = 31;
  char entity_2[24] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_4 = 'r';
  char* entity_9;
  memset(entity_2, 'I', 24-1);
  entity_2[24-1]='';
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  strcpy(entity_9, entity_2);
}