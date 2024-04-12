void fun()
{
  int entity_3 = 66;
  entity_3 = 76;
  char entity_5 = 'T';
  char* entity_7;
  char entity_2[entity_3] = "";
  entity_7 = (char*)malloc(73*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'B', entity_3-1);
  entity_2[entity_3-1]='0';
  memcpy(entity_7, entity_2, entity_3*sizeof(char));
}