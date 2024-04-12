void fun()
{
  char* entity_9;
  char entity_2 = 'k';
  char entity_7[3] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'j', 3-1);
  entity_7[3-1]='';
  entity_4 = (char*)malloc(86*sizeof(char));
  entity_4[86-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  strcpy(entity_4, entity_7);
}