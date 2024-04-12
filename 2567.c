void fun()
{
  int entity_7 = 43;
  char* entity_4;
  char* entity_3;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memset(entity_5, 'e', entity_7-1);
  entity_5[entity_7-1]='';
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  memcpy(entity_3, entity_5, entity_7*sizeof(char));
}