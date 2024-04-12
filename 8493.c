void fun()
{
  int entity_5 = 32;
  char* entity_7;
  char* entity_1;
  char entity_0[62] = "";
  entity_0 = NULL;
  char entity_3 = 'b';
  memset(entity_0, 'B', 62-1);
  entity_0[62-1]='';
  entity_1 = (char*)malloc(79*sizeof(char));
  entity_1[79-1]='';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  memcpy(entity_7, entity_0, 62*sizeof(char));
}