void fun()
{
  char entity_6[54] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_7[92] = "";
  entity_7 = NULL;
  memset(entity_6, 'i', 54-1);
  entity_6[54-1]='';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  memset(entity_7, 'c', 92-1);
  entity_7[92-1]='';
  entity_6[13] = 'p';
}