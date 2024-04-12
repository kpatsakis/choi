void fun()
{
  int entity_2 = 42;
  int entity_6 = 12;
  char* entity_5;
  char entity_3[100] = "";
  entity_3 = NULL;
  char entity_4[92] = "";
  entity_4 = NULL;
  memset(entity_3, 'L', 100-1);
  entity_3[100-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_4, 't', 92-1);
  entity_4[92-1]='';
  entity_2 = 38;
  strcpy(entity_5, entity_3);
}