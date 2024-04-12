void fun()
{
  int entity_6 = 48;
  int entity_4 = 15;
  char entity_2[entity_4] = "";
  char* entity_7;
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'F', entity_4-1);
  entity_2[entity_4-1]='0';
  memcpy(entity_7, entity_2, entity_4*sizeof(char));
}