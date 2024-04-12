void fun()
{
  char* entity_2;
  char entity_9[79] = "";
  entity_9 = NULL;
  char entity_7[22] = "";
  entity_7 = NULL;
  memset(entity_7, 'B', 22-1);
  entity_7[22-1]='';
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[10-1]='';
  memset(entity_9, 'l', 79-1);
  entity_9[79-1]='';
  entity_9[78] = 'z';
}