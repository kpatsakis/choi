void fun()
{
  char* entity_2;
  char entity_7[92] = "";
  memset(entity_7, 'i', 92-1);
  entity_7[92-1]='0';
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_7);
}