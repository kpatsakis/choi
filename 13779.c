void fun()
{
  int entity_2 = 32;
  entity_2 = 49;
  char entity_4 = 'S';
  char entity_5[entity_2] = "";
  char* entity_0;
  char entity_7 = 'G';
  char entity_3 = 'i';
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'g', entity_2-1);
  entity_5[entity_2-1]='0';
  memcpy(entity_0, entity_5, entity_2*sizeof(char));
}