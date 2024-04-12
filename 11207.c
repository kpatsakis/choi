void fun()
{
  char* entity_7;
  char entity_4[100] = "";
  memset(entity_4, 'F', 100-1);
  entity_4[100-1]='0';
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}