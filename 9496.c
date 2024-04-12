void fun()
{
  int entity_1 = 90;
  entity_1 = 7;
  char entity_4[9] = "";
  entity_4 = NULL;
  char entity_3[92] = "";
  entity_3 = NULL;
  char entity_8 = 'd';
  char* entity_7;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_4, 'G', 9-1);
  entity_4[9-1]='';
  memset(entity_3, 'Z', 92-1);
  entity_3[92-1]='';
  memcpy(entity_7, entity_4, 9*sizeof(char));
}