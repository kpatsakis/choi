void fun()
{
  char entity_0[89] = "";
  char* entity_3;
  char entity_9[42] = "";
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'i', 42-1);
  entity_9[42-1]='0';
  memset(entity_0, 'V', 89-1);
  entity_0[89-1]='0';
  entity_0[100] = 'I';
}