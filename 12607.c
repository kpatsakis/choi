void fun()
{
  int entity_0 = 19;
  char entity_3[55] = "";
  char entity_2[entity_0] = "";
  char* entity_7;
  char* entity_4;
  memset(entity_2, 'O', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'I', 55-1);
  entity_3[55-1]='0';
  entity_7 = (char*)malloc(47*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_2);
}