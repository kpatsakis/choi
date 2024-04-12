void fun()
{
  int entity_8 = 64;
  int entity_3 = 12;
  int entity_5 = 11;
  entity_8 = 57;
  char entity_1[13] = "";
  entity_1 = NULL;
  char* entity_7;
  char* entity_6;
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  memset(entity_1, 'r', 13-1);
  entity_1[13-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_1, 13*sizeof(char));
}