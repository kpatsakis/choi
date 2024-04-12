void fun()
{
  int entity_3 = 82;
  entity_3 = 11;
  char entity_5 = 'A';
  char entity_2[entity_3] = "";
  char* entity_7;
  entity_7 = (char*)malloc(18*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'w', entity_3-1);
  entity_2[entity_3-1]='0';
  memcpy(entity_7, entity_2, entity_3*sizeof(char));
}