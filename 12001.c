void fun()
{
  int entity_6 = 83;
  char* entity_1;
  char entity_2[54] = "";
  char* entity_7;
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'N', 54-1);
  entity_2[54-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_2, 54*sizeof(char));
}