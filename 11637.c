void fun()
{
  char entity_1[68] = "";
  char* entity_7;
  memset(entity_1, 't', 68-1);
  entity_1[68-1]='0';
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_1);
}