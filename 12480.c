void fun()
{
  int entity_4 = 50;
  char entity_5[entity_4] = "";
  char* entity_2;
  char* entity_7;
  memset(entity_5, 'j', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[0]='0';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, entity_4*sizeof(char));
}