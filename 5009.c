void fun()
{
  int entity_1 = 98;
  entity_1 = 97;
  char entity_5[61] = "";
  entity_5 = NULL;
  char entity_2 = 'i';
  char* entity_7;
  memset(entity_5, 'I', 61-1);
  entity_5[61-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  strcpy(entity_7, entity_5);
}