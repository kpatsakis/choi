void fun()
{
  int entity_7 = 51;
  char* entity_2;
  char entity_5 = 'A';
  char entity_4[47] = "";
  entity_4 = NULL;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[1-1]='';
  memset(entity_3, 'I', entity_7-1);
  entity_3[entity_7-1]='';
  memset(entity_4, 'V', 47-1);
  entity_4[47-1]='';
  entity_7 = 90;
  strcpy(entity_2, entity_3);
}