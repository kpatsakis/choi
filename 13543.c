void fun()
{
  int entity_7 = 80;
  int entity_2 = 85;
  entity_2 = 77;
  char entity_5[entity_2] = "";
  char* entity_3;
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'w', entity_2-1);
  entity_5[entity_2-1]='0';
  memcpy(entity_3, entity_5, entity_2*sizeof(char));
}