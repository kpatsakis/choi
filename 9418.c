void fun()
{
  int entity_7 = 9;
  char* entity_4;
  char entity_2[5] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_8;
  char entity_1 = 'u';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  memset(entity_2, 'w', 5-1);
  entity_2[5-1]='';
  memcpy(entity_8, entity_2, 5*sizeof(char));
}