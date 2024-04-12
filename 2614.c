void fun()
{
  char* entity_1;
  char entity_9[29] = "";
  entity_9 = NULL;
  char entity_6 = 'G';
  char entity_3[22] = "";
  entity_3 = NULL;
  memset(entity_3, 'p', 22-1);
  entity_3[22-1]='';
  memset(entity_9, 'P', 29-1);
  entity_9[29-1]='';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[78-1]='';
  entity_3[42] = 'b';
}