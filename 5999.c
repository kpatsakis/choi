void fun()
{
  int entity_7 = 97;
  int entity_2 = 30;
  char entity_4[84] = "";
  entity_4 = NULL;
  char entity_8 = 'D';
  char* entity_6;
  memset(entity_4, 'z', 84-1);
  entity_4[84-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_2 = 85;
  memcpy(entity_6, entity_4, 84*sizeof(char));
}