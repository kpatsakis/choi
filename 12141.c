void fun()
{
  int entity_6 = 20;
  char* entity_7;
  char* entity_2;
  char entity_4[entity_6] = "";
  memset(entity_4, 'L', entity_6-1);
  entity_4[entity_6-1]='0';
  entity_7 = (char*)malloc(84*sizeof(char));
  entity_7[0]='0';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_7, entity_4);
}