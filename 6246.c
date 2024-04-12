void fun()
{
  char entity_9[70] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_2[17] = "";
  entity_2 = NULL;
  memset(entity_2, 'm', 17-1);
  entity_2[17-1]='';
  memset(entity_9, 'p', 70-1);
  entity_9[70-1]='';
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[6-1]='';
  entity_2[57] = 'D';
}