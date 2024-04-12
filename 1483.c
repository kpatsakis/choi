void fun()
{
  int entity_8 = 32;
  int entity_4 = 64;
  int entity_6 = 72;
  entity_8 = 21;
  char entity_3[48] = "";
  entity_3 = NULL;
  char* entity_7;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  memset(entity_3, 'w', 48-1);
  entity_3[48-1]='';
  memset(entity_2, 'o', entity_8-1);
  entity_2[entity_8-1]='';
  memcpy(entity_7, entity_2, entity_8*sizeof(char));
}