void fun()
{
  int entity_4 = 87;
  char* entity_3;
  char entity_0 = 'O';
  char entity_6 = 'R';
  char* entity_7;
  char entity_1[72] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[78-1]='';
  memset(entity_1, 'N', 72-1);
  entity_1[72-1]='';
  memcpy(entity_7, entity_1, 72*sizeof(char));
}