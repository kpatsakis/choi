void fun()
{
  int entity_4 = 16;
  int entity_3 = 70;
  char* entity_8;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char entity_2[43] = "";
  entity_2 = NULL;
  memset(entity_1, 'S', entity_4-1);
  entity_1[entity_4-1]='';
  memset(entity_2, 'c', 43-1);
  entity_2[43-1]='';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  entity_4 = 22;
  memcpy(entity_8, entity_1, entity_4*sizeof(char));
}