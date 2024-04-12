void fun()
{
  char* entity_4;
  char entity_2[47] = "";
  entity_2 = NULL;
  char entity_9[34] = "";
  entity_9 = NULL;
  char entity_8[92] = "";
  entity_8 = NULL;
  memset(entity_9, 'c', 34-1);
  entity_9[34-1]='';
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  memset(entity_2, 'C', 47-1);
  entity_2[47-1]='';
  memset(entity_8, 'W', 92-1);
  entity_8[92-1]='';
  entity_8[92] = 'R';
}