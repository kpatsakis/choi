void fun()
{
  int entity_8 = 85;
  char entity_0[27] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_2;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_0, 'C', 27-1);
  entity_0[27-1]='';
  entity_2 = (char*)malloc(26*sizeof(char));
  entity_2[26-1]='';
  entity_8 = 49;
  memcpy(entity_7, entity_0, 27*sizeof(char));
}