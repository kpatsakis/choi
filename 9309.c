void fun()
{
  char entity_9[8] = "";
  entity_9 = NULL;
  char entity_4[50] = "";
  entity_4 = NULL;
  char entity_6 = 'u';
  char* entity_7;
  memset(entity_4, 'n', 50-1);
  entity_4[50-1]='';
  memset(entity_9, 't', 8-1);
  entity_9[8-1]='';
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  entity_4[5] = 'k';
}