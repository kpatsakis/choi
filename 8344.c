void fun()
{
  char* entity_4;
  char entity_1[8] = "";
  entity_1 = NULL;
  memset(entity_1, 'R', 8-1);
  entity_1[8-1]='';
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  entity_1[92] = 'B';
}