void fun()
{
  char* entity_9;
  char entity_2[22] = "";
  entity_2 = NULL;
  char entity_6[48] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(70*sizeof(char));
  entity_9[70-1]='';
  memset(entity_6, 'm', 48-1);
  entity_6[48-1]='';
  memset(entity_2, 'S', 22-1);
  entity_2[22-1]='';
  entity_2[13] = 'A';
}