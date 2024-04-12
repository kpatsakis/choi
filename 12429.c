void fun()
{
  int entity_6 = 60;
  char* entity_5;
  char* entity_2;
  char entity_0[entity_6] = "";
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'C', entity_6-1);
  entity_0[entity_6-1]='0';
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, entity_6*sizeof(char));
}