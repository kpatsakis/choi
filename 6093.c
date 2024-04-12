void fun()
{
  char entity_2[25] = "";
  entity_2 = NULL;
  char* entity_9;
  char* entity_3;
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[37-1]='';
  memset(entity_2, 'R', 25-1);
  entity_2[25-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  strcpy(entity_9, entity_2);
}